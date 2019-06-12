-- phpMyAdmin SQL Dump
-- version 4.8.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 12, 2019 at 02:57 PM
-- Server version: 10.1.34-MariaDB
-- PHP Version: 7.2.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `sistem_parkir`
--

-- --------------------------------------------------------

--
-- Table structure for table `parkir_kendaraan`
--

CREATE TABLE `parkir_kendaraan` (
  `jam_keluar` int(2) NOT NULL,
  `riwayat` varchar(20) NOT NULL,
  `id_parkir` varchar(10) NOT NULL,
  `slot` varchar(5) NOT NULL,
  `tanggal` date NOT NULL,
  `no_id` varchar(10) NOT NULL,
  `biaya` int(8) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `parkir_kendaraan`
--
ALTER TABLE `parkir_kendaraan`
  ADD PRIMARY KEY (`id_parkir`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `parkir_kendaraan`
--
ALTER TABLE `parkir_kendaraan`
  ADD CONSTRAINT `parkir_kendaraan_ibfk_1` FOREIGN KEY (`id_parkir`) REFERENCES `mobil` (`no_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
