-- phpMyAdmin SQL Dump
-- version 4.8.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 17, 2019 at 01:54 PM
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
-- Table structure for table `mobil`
--

CREATE TABLE `mobil` (
  `no_id` varchar(10) NOT NULL,
  `merek` varchar(10) NOT NULL,
  `warna` varchar(20) NOT NULL,
  `plat` varchar(18) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `motor`
--

CREATE TABLE `motor` (
  `no_id` varchar(10) NOT NULL,
  `merek` varchar(10) NOT NULL,
  `warna` varchar(20) NOT NULL,
  `plat` varchar(18) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `parkir mobil`
--

CREATE TABLE `parkir mobil` (
  `id_parkir` varchar(10) NOT NULL,
  `no_id` varchar(10) NOT NULL,
  `slot` varchar(5) NOT NULL,
  `tanggal` date NOT NULL,
  `jam keluar` int(2) NOT NULL,
  `biaya` int(8) NOT NULL,
  `riwayat` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `parkir motor`
--

CREATE TABLE `parkir motor` (
  `id_parkir` varchar(10) NOT NULL,
  `no_id` varchar(10) NOT NULL,
  `slot` varchar(5) NOT NULL,
  `tanggal` date NOT NULL,
  `jam keluar` int(2) NOT NULL,
  `biaya` int(8) NOT NULL,
  `riwayat` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `petugas mobil`
--

CREATE TABLE `petugas mobil` (
  `user` varchar(10) NOT NULL,
  `nama` varchar(20) NOT NULL,
  `no_petugas` int(10) NOT NULL,
  `password` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `petugas motor`
--

CREATE TABLE `petugas motor` (
  `user` varchar(10) NOT NULL,
  `nama` varchar(20) NOT NULL,
  `no_petugas` int(10) NOT NULL,
  `password` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `mobil`
--
ALTER TABLE `mobil`
  ADD PRIMARY KEY (`no_id`);

--
-- Indexes for table `motor`
--
ALTER TABLE `motor`
  ADD PRIMARY KEY (`no_id`);

--
-- Indexes for table `petugas mobil`
--
ALTER TABLE `petugas mobil`
  ADD PRIMARY KEY (`user`);

--
-- Indexes for table `petugas motor`
--
ALTER TABLE `petugas motor`
  ADD PRIMARY KEY (`user`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `motor`
--
ALTER TABLE `motor`
  ADD CONSTRAINT `motor_ibfk_1` FOREIGN KEY (`no_id`) REFERENCES `parkir_kendaraan` (`id_parkir`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
