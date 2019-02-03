<html>

<title>W3.CSS Template</title>

<meta charset="UTF-8">

<meta name="viewport" content="width=device-width, initial-scale=1">

<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">

<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Raleway">

<style>

body,h1,h2{font-family: "Raleway", sans-serif}

body, html {height: 100%}

p {line-height: 2}


.bgimg, .bgimg2 {

  min-height: 100%;

  background-position: center;

  background-size: cover;

}


.bgimg {background-image: url("https://scontent-yyz1-1.xx.fbcdn.net/v/t1.15752-9/51318341_586511645143912_2467595987296714752_n.png?_nc_cat=107&_nc_ht=scontent-yyz1-1.xx&oh=d83253dc543bed6763cf58696fff4870&oe=5CED8FFF")}

.bgimg2 {background-image: url("http://www.4usky.com/data/out/1/163982007-abstract-wallpapers.jpg")}

</style>





<!-- Header / Home-->

<header class="w3-display-container w3-wide bgimg w3 greyscale-min" id="home">

  <div class="w3-display-middle w3-text-white w3-center">

    <h1 class="w3-jumbo">BRAIN|FIGHTS</h1>

    <div class="w3-text-white w3-center">

    <h2>TAK? TH? CHALL?NG?</h2>

</div>

</header>



<!-- Navbar (sticky bottom) -->

<div class="w3-bottom w3-hide-small">

  <div class="w3-bar w3-purple w3-center w3-padding w3-opacity-min w3-hover-opacity-off">

    <a href="#home" style="width:25%" class="w3-bar-item w3-button">CHOOSE FIELD</a>

    <a class="w3-bar-item w3-button" href="./hi.html" style="width:25%">ENGINEERING</a>

      <a class="w3-bar-item w3-button" href="./art.html" style="width:25%">ARTS</a>

    <a href="./ros.html" style="width:25%" class="w3-bar-item w3-button">RANK</a>


  </div>

</div>



<!-- About / Jane And John -->

<div class="w3-container w3-padding-64 w3-pale-red w3-grayscale-min" id="us">

  <div class="w3-content">

    <h1 class="w3-center w3-text-grey"><b>GET YOUR LINK</b></h1>

    <img class="w3-round w3-grayscale-min" src="/w3images/wedding_couple2.jpg" style="width:100%;margin:32px 0">

    <p><i> </i>

    </p><br>

    <p class="w3-center"><a href="#wedding" class="w3-button w3-black w3-round w3-padding-large w3-large">CLICK HERE</a></p>

  </div>

</div>



<!-- Background photo -->

<div class="w3-display-container bgimg2">

  <div class="w3-display-middle w3-text-white w3-center">

    <h1 class="w3-jumbo">You Are Invited</h1><br>

    <h2>Of course..</h2>

  </div>

</div>



<!-- Wedding information -->

<div class="w3-container w3-padding-64 w3-pale-red w3-grayscale-min w3-center" id="wedding">

  <div class="w3-content">

    <h1 class="w3-text-grey"><b>THE WEDDING</b></h1>

    <img class="w3-round-large w3-grayscale-min" src="/w3images/wedding_location.jpg" style="width:100%;margin:64px 0">

    <div class="w3-row">

      <div class="w3-half">

        <h2>When</h2>

        <p>Wedding Ceremony - 2:00pm</p>

        <p>Reception & Dinner - 5:00pm</p>

      </div>

      <div class="w3-half">

        <h2>Where</h2>

        <p>Some place, an address</p>

        <p>Some where, some address</p>

      </div>

    </div>

  </div>

</div>



<!-- RSVP section -->

<div class="w3-container w3-padding-64 w3-pale-red w3-center w3-wide" id="rsvp">

  <h1>HOPE YOU CAN MAKE IT!</h1>

  <p class="w3-large">Kindly Respond By January, 2017</p>

 <p class="w3-xlarge">

    <button onclick="document.getElementById('id01').style.display='block'" class="w3-button w3-round w3-red w3-opacity w3-hover-opacity-off" style="padding:8px 60px">RSVP</button>

  </p>

</div>



<!-- RSVP modal -->

<div id="id01" class="w3-modal">

  <div class="w3-modal-content w3-card-4 w3-animate-zoom" style="padding:32px;max-width:600px">

    <div class="w3-container w3-white w3-center">

      <h1 class="w3-wide">CAN YOU COME?</h1>

      <p>We really hope you can make it.</p>

      <form>

        <input class="w3-input w3-border" type="text" placeholder="Name(s)" name="name">

      </form>

      <p><i>Sincerely, John & Jane</i></p>

      <div class="w3-row">

        <div class="w3-half">

          <button onclick="document.getElementById('id01').style.display='none'" type="button" class="w3-button w3-block w3-green">Going</button>

        </div>

        <div class="w3-half">

          <button onclick="document.getElementById('id01').style.display='none'" type="button" class="w3-button w3-block w3-red">Can't come</button>

        </div>

      </div>

    </div>

  </div>

</div>



<!-- Footer -->

<footer class="w3-center w3-black w3-padding-16">

<html>
  <head>
    <title>W3.CSS</title>
    <link rel="stylesheet" href="./w3.css">
  </head>
<body background="./eng.jpg">
<h1 class = "title"> ENGINEERING </h1>

  <div class="cntr">
  	<div class="cntr-innr">
  	  <label class="search" for="inpt_search">
  			<input id="inpt_search" type="text" />
  		</label>
  	</div>
  </div>



  <ul class="list">
                <li class="list__item">Anna<a class="list__check-btn">X</a></li>
                <li class="list__item">John<a class="list__check-btn">X</a></li>
                <li class="list__item list__item--checked">Lisa<a class="list__check-btn list__check-btn--checked">X</a></li>
            </ul>


</body>
</html>

  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" title="W3.CSS" target="_blank" class="w3-hover-text-green">w3.css</a></p>

</footer>

<div class="w3-hide-small" style="margin-bottom:32px"> </div>



</body>

</html>
