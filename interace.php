<!DOCTYPE html>
<html>
<head>
	<?php 
	session_start();
	include 'cek.php';
	include 'config.php';
	?>
	<title></title>
	<!-- <link rel="stylesheet" type="text/css" href="style.css"> -->
	<link rel="stylesheet" type="text/css" href="assets/bootstrap4/css/bootstrap.css">
	<link rel="stylesheet" type="text/css" href="assets/bootstrap4/css/bootstrap.min.css">
	
	<!-- <link rel="stylesheet" type="text/css" href="assets/js/jquery-ui/jquery-ui.css"> -->
	
</head>
<body>
		<nav class="navbar navbar-expand-lg navbar-dark bg-primary">
			<div class="container">
			<a class="navbar-brand" href="#">Parkir Otomatis</a>
			<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavAltMarkup" aria-controls="navbarNavAltMarkup" aria-expanded="false" aria-label="Toggle navigation">
				<span class="navbar-toggler-icon"></span>
			</button>
			<div class="collapse navbar-collapse" id="navbarNavAltMarkup">
				<div class="navbar-nav">
				<a class="nav-item nav-link active" href="interace.php">Home <span class="sr-only">(current)</span></a>
				<a class="nav-item nav-link" href="#">Map Order</a>
				<a class="nav-item nav-link" href="about.php">About</a>
				
				</div>
			</div>
			</div>
		</nav>
		<div class="container">
		<div id="carouselExampleControls" class="carousel slide" data-ride="carousel">
			<div class="carousel-inner">
				<div class="carousel-item active">
				<img src="assets/img/5.png" class="d-block w-100" alt="...">
				</div>
				<div class="carousel-item">
				<img src="assets/img/5.png" class="d-block w-100" alt="...">
				</div>
				<div class="carousel-item">
				<img src="assets/img/5.png" class="d-block w-100" alt="...">
				</div>
			</div>
			<a class="carousel-control-prev" href="#carouselExampleControls" role="button" data-slide="prev">
				<span class="carousel-control-prev-icon" aria-hidden="true"></span>
				<span class="sr-only">Previous</span>
			</a>
			<a class="carousel-control-next" href="#carouselExampleControls" role="button" data-slide="next">
				<span class="carousel-control-next-icon" aria-hidden="true"></span>
				<span class="sr-only">Next</span>
			</a>
			</div>
			</div>
			<div class="container mt-5">
				<div class="respond">

				<h3>Leave a Comment</h3>

				<!-- form -->
				<form>
					<div class="form-group">
						<label for="exampleFormControlInput1">Email address</label>
						<input type="text" class="form-control" id="exampleFormControlInput1" placeholder="Name">
						<label for="exampleFormControlInput1">Email address</label>
						<input type="email" class="form-control" id="exampleFormControlInput1" placeholder="name@example.com">
					</div>
					
					<div class="form-group">
						<label for="exampleFormControlTextarea1">Comment</label>
						<textarea class="form-control" id="exampleFormControlTextarea1" rows="3"></textarea>
					</div>
					<button type="submit" class="btn btn-primary">Submit</button>
					</form>

				</div>
</div>
	<!-- <div class="wrap">
		<div class="header">			
			<h1>PARKIR OTOMATIS</h1>
			<p>sistem parkir mandiri</p>
		</div>
		<div class="menu">
			<ul>
				<li><a href="#">Home</a></li>
				<li><a href="#">about</a></li>				
			</ul>
		</div>
		<div class="badan">			
			<div class="content">
				
				<button type="button" class="btn btn-success">NO1</button>
				
				<button type="button" class="btn btn-danger">NO2</button>
				<br>
				<button type="button" class="btn btn-danger">NO3</button>
				<button type="button" class="btn btn-success">NO4</button>
				</h3>
			</div>
			</div>
		</div>
		<div class="clear"></div>
		<div class="footer">
			about
		</div>
	</div> -->
	<script type="text/javascript" src="assets/bootstrap4/js/jquery.js"></script>
	<script type="text/javascript" src="assets/bootstrap4/js/bootstrap.js"></script>
	<script type="text/javascript" src="assets/bootstrap4/js/jquery-ui/jquery-ui.js"></script>
	
</body>
</html>