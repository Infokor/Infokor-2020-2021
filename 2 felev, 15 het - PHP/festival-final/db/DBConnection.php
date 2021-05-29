<?php

class DBConnection
{
    const HOST = 'localhost';
    const USERNAME = 'root';
    const PASSWORD = '';
    const DB = 'festival';

    private static $instance = null;
    private $dbcon;

    private function __construct()
    {
        $this->dbcon = new mysqli(self::HOST, self::USERNAME, self::PASSWORD, self::DB);

        if ($this->dbcon->connect_error) { 
            throw new Exception("Connection failed: " . $this->dbcon->connect_error);
        }
    }

    public function __destruct() {
        $this->dbcon->close();
    }

    public static function getInstance()
    {
        if (self::$instance == null)
        {
            self::$instance = new DBConnection();
        }

        return self::$instance;
    }

    public function getConnection()
    {
        return $this->dbcon;
    }
}

?>