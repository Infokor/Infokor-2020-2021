<?php 

require_once 'DBConnection.php';
require_once __DIR__ . '/../model/Purchase.php';


class PurchaseDao
{
    private const STMT_FIND_BY_ID = "SELECT * FROM purchase WHERE id = ?";
    private const STMT_INSERT = "INSERT INTO purchase (customer_first_name, customer_last_name, no_tickets, time) VALUES (?, ?, ?, ?)";

    private $conn;

    //constructor
    function __construct() {
        $this->conn = DBConnection::getInstance()->getConnection();
    }

    public function findById($id) {
        $stmt = $this->conn->prepare(PurchaseDao::STMT_FIND_BY_ID);
        $stmt->bind_param("i", $id);
        $stmt->execute();

        $result = $stmt->get_result(); 

        if($result->num_rows == 0) {
            return null;
        }

        $purchase = $this->transformResultRow($result->fetch_array());
        $result->close();
        return $purchase;
    }

    public function create($purchase) {
        $stmt = $this->conn->prepare(PurchaseDao::STMT_INSERT);
        $stmt->bind_param("ssis", $customerFirstName, $customerLastName, $noTickets, $time);

        $customerFirstName = $purchase->customerFirstName;
        $customerLastName = $purchase->customerLastName;
        $noTickets = $purchase->noTickets;
        $time = date("Y-m-d H:i:s", $purchase->time);

        $stmt->execute();

        return $this->findById($stmt->insert_id);
    }


    private function transformResultRow($row) {
        $purchase = new Purchase;

        $purchase->id = $row["id"];
        $purchase->customerFirstName = $row["customer_first_name"];
        $purchase->customerLastName = $row["customer_last_name"];
        $purchase->noTickets = $row["no_tickets"];
        $purchase->time = strtotime($row["time"]);

        return $purchase;
    }
}
?>