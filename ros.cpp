<html>
<head>
  <title>"BrainFight"</title>
  <link rel="stylesheet" href = "./ab.css">
  </<head>
    <body>

      <nav class="nav flex">

      <div class="user-navigation flex">
        <div class="user-block pointer">
          <div id="personal-border" class="user-border flex absolute bright-blue"></div>
          <div class="user-container flex align-center relative">
            <p class="messages-notification absolute bright-blue">2</p>
            <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/berner_avatar.png" />
            <div class="user-info flex column justify-center">
              <p class="user-username">BernNotice</p>
              <p class="user-score">2016 Total Calls</p>
            </div>
            <svg class="dropdown-icon" fill="#0ee000" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
            <path d="M7 10l5 5 5-5z"/>
            <path d="M0 0h24v24H0z" fill="none"/>
          </svg>
            <svg class="dropup-icon" fill="#000000" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
            <path d="M7 14l5-5 5 5z"/>
            <path d="M0 0h24v24H0z" fill="none"/>
        </svg>
          </div>
          <div class="user-menu flex column absolute">
            <a class="nav-link flex align-center pointer"> <svg class="menu-link-icon" fill="#4a4a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
          <path d="M0 0h24v24H0z" fill="none"/>
          <path d="M16 11c1.66 0 2.99-1.34 2.99-3S17.66 5 16 5c-1.66 0-3 1.34-3 3s1.34 3 3 3zm-8 0c1.66 0 2.99-1.34 2.99-3S9.66 5 8 5C6.34 5 5 6.34 5 8s1.34 3 3 3zm0 2c-2.33 0-7 1.17-7 3.5V19h14v-2.5c0-2.33-4.67-3.5-7-3.5zm8 0c-.29 0-.62.02-.97.05 1.16.84 1.97 1.97 1.97 3.45V19h6v-2.5c0-2.33-4.67-3.5-7-3.5z"/>
      </svg>Your Team</a>
            <a class=" nav-link flex align-center pointer">
              <span class="menu-link-notification absolute flex bright-blue justify-center">2</span>
              <svg class="menu-link-icon" fill="#4a3a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
          <path d="M19 3H4.99c-1.11 0-1.98.89-1.98 2L3 19c0 1.1.88 2 1.99 2H19c1.1 0 2-.9 2-2V5c0-1.11-.9-2-2-2zm0 12h-4c0 1.66-1.35 3-3 3s-3-1.34-3-3H4.99V5H19v10z"/>
          <path d="M0 0h24v24H0V0z" fill="none"/>
      </svg> Messages</a>
            <a class="nav-link flex align-center pointer">
              <svg class="menu-link-icon" fill="#4a3a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
          <path d="M0 0h24v24H0z" fill="none"/>
          <path d="M13 3h-2v10h2V3zm4.83 2.17l-1.42 1.42C17.99 7.86 19 9.81 19 12c0 3.87-3.13 7-7 7s-7-3.13-7-7c0-2.19 1.01-4.14 2.58-5.42L6.17 5.17C4.23 6.82 3 9.26 3 12c0 4.97 4.03 9 9 9s9-4.03 9-9c0-2.74-1.23-5.18-3.17-6.83z"/></svg> Sign Out
            </a>
          </div>
        </div>
        <div class="menu-block pointer flex column">
          <div id="menu-border" class="user-border flex absolute bright-blue"></div>
        <div class="menu-icon flex drop-down align-center justify-center">Leaderboard</div>
          <div class="nav-links flex column">
            <a class="nav-link flex align-center pointer"><svg class="menu-link-icon" fill="#4a4a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
        <path d="M19 3H5c-1.1 0-2 .9-2 2v14c0 1.1.9 2 2 2h14c1.1 0 2-.9 2-2V5c0-1.1-.9-2-2-2zM9 17H7v-7h2v7zm4 0h-2V7h2v10zm4 0h-2v-4h2v4z"/>
        <path d="M0 0h24v24H0z" fill="none"/>
    </svg>Leaderboard</a>
            <a class="nav-link flex align-center pointer"><svg class="menu-link-icon" fill="#3a4a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
        <path d="M0 0h24v24H0z" fill="none"/>
        <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm1 17h-2v-2h2v2zm2.07-7.75l-.9.92C13.45 12.9 13 13.5 13 15h-2v-.5c0-1.1.45-2.1 1.17-2.83l1.24-1.26c.37-.36.59-.86.59-1.41 0-1.1-.9-2-2-2s-2 .9-2 2H8c0-2.21 1.79-4 4-4s4 1.79 4 4c0 .88-.36 1.68-.93 2.25z"/>
    </svg> Help</a>
            <a class="nav-link flex align-center pointer"><svg class="menu-link-icon" fill="#3b4a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
        <path d="M3 5v14c0 1.1.89 2 2 2h14c1.1 0 2-.9 2-2V5c0-1.1-.9-2-2-2H5c-1.11 0-2 .9-2 2zm12 4c0 1.66-1.34 3-3 3s-3-1.34-3-3 1.34-3 3-3 3 1.34 3 3zm-9 8c0-2 4-3.1 6-3.1s6 1.1 6 3.1v1H6v-1z"/>
        <path d="M0 0h24v24H0z" fill="none"/>
    </svg> Candidates</a>
          </div>
        </div>

      </div>
    </nav>

    <div class="content">

      <div class="search-bar flex grow">
        <input class="search flex grow" placeholder="Search"/>
        <button type="submit">Submit</button>

      </div>

      <div class="leaderboard flex column wrap">
        <div class="leaderboard-table flex column">
          <div class="leaderboard-header flex column grow">

              <div class="filter-by flex grow wrap">
                <div class="time-filter flex grow">
                  <div class="row-button pointer row-button--active align-center">Today</div>


        <h2 id="row-button"></h2>
                  <div class="row-button pointer align-center">This week</div>

                  <div onclick="alltime()" class="row-button pointer align-center">All-time</div>
                </div>
                <div class="subject-filter flex grow">
                  <div class="table-tab pointer flex grow justify-center align-center tab-active">
                    <svg class="menu-link-icon" fill="#FFFFee" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
                      <path d="M12 12c2.21 0 4-1.79 4-4s-1.79-4-4-4-4 1.79-4 4 1.79 4 4 4zm0 2c-2.67 0-8 1.34-8 4v2h16v-2c0-2.66-5.33-4-8-4z"/>
                    </svg>
                    Users</div>
                  <div class="table-tab pointer flex grow justify-center align-center"> <svg class="menu-link-icon" fill="#4a4a4a" height="24" viewBox="0 0 24 24" width="24" xmlns="http://www.w3.org/2000/svg">
                    <path d="M16 11c1.66 0 2.99-1.34 2.99-3S17.66 5 16 5c-1.66 0-3 1.34-3 3s1.34 3 3 3zm-8 0c1.66 0 2.99-1.34 2.99-3S9.66 5 8 5C6.34 5 5 6.34 5 8s1.34 3 3 3zm0 2c-2.33 0-7 1.17-7 3.5V19h14v-2.5c0-2.33-4.67-3.5-7-3.5zm8 0c-.29 0-.62.02-.97.05 1.16.84 1.97 1.97 1.97 3.45V19h6v-2.5c0-2.33-4.67-3.5-7-3.5z"/>
                    </svg>
                    </div>
                </div>
              </div>


              <div class="leaderboard-row flex align-center row--header" style="border-radius: 0 !important;">
                <div class="row-position">Position</div>
                <div class="row-collapse flex align-center">
                  <div class="row-user--header">User</div>
                  <div class="row-team--header">Team</div>
                  <div class="row-rank--header">Rank</div>
                </div>
                <div class="row-points">Points</div>
              </div>
            </div>


        <div class="leaderboard-body flex column grow">
          <div class="leaderboard-row flex align-center">
            <div class="row-position">1</div>
            <div class="row-collapse flex align-center">
              <div class="row-caller flex">
                <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/ruffalo-avatar.png" />
                <div class="row-user">thebestberniefangirl1967</div>
              </div>
              <div class="row-team">Electoral Avengers</div>
              <div class="row-rank">Superhero</div>
            </div>
            <div class="row-calls">1567</div>
          </div>

          <div class="leaderboard-row flex row-alt align-center">
            <div class="row-position">2</div>
            <div class="row-collapse flex align-center">
              <div class="row-caller flex">
                <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/danny-avatar.png" />
                <p class="row-user">doritosguy</p>
              </div>
              <div class="row-team">the trashmen</div>
              <div class="row-rank">Vice President</div>
            </div>
            <div class="row-calls">567</div>
          </div>

          <div class="leaderboard-row flex align-center">
            <div class="row-position">3</div>
            <div class="row-collapse flex align-center">
              <div class="row-caller flex">
                <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/robert-avatar.png" />
                <div class="row-user">SaveCapitalism</div>
              </div>
              <div class="row-team">Common Sense Party</div>
              <div class="row-rank">Daily Hero</div>
            </div>
            <div class="row-calls">231</div>
          </div>

          <div class="leaderboard-row flex row-alt align-center">
            <div class="row-position">4</div>
            <div class="row-collapse flex align-center">
              <div class="row-caller flex">
                <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/killer_mike.png" />
                <div class="row-user">RunTheJewels</div>
              </div>
              <div class="row-team">FeelTheBurn</div>
              <div class="row-rank">Advocate</div>
            </div>
            <div class="row-calls">44</div>
          </div>

          <div class="leaderboard-row flex align-center">
            <div class="row-position">5</div>
            <div class="row-collapse flex align-center">
              <div class="row-caller flex">
                <img class="avatar" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/225473/corbyn.png" />
                <div class="row-user">Brexit at Tiffany's</div>
              </div>
              <div class="row-team">Labour Party</div>
              <div class="row-rank">Councillor</div>
            </div>
            <div class="row-calls">10</div>
          </div>

          <div class="leaderboard-footer flex align-center">
      Page 1 of 2 <a class="footer-btn pointer">Next</a> 5 of 37 items
          </div>

        </div>
      </div>

      </div>

    </div>

    <footer class="flex column align-center justify-center">
      <p>Developed by The Hackhers</p>
      <img src="https://d397eo7kv84tb5.cloudfront.net/static/images/misc/NotTheBillionairesWhite.png" />
    </footer>
</body>


</html>
