              <div class="col-md-4"><img src="firstnamelastname.jpg" class="img-responsive" width="180" height="240" alt="Firstname Lastname" /></div>
              <div class="col-md-8"><h3>Kartik Teotia</h3>
                <a href="//www.mpi-inf.mpg.de/">Max-Planck-Institut f&uuml;r Informatik</a><br />
                <a href="#departmenturl#" title="#departmentnumber#: #departmentname#">#departmentnumber#: #departmentname#</a><br />
                #researcharea#
                <table class="table">
                  <tr>
                    <th scope="row"><i class="fa fa-map-marker"></i>&nbsp;office:</th>
                    <td><div id="floorplan-modal" class="modal fade" tabindex="-1" style="display: none;"></div>
                      <a href="//www.mpi-inf.mpg.de/institute/address">Campus E1 4</a>,
                      Room #room#<br/>
                      Saarland Informatics Campus<br/>
                      66123 <a href="http://www.saarbruecken.de/">Saarbr&uuml;cken</a><br/>
                      <a href="http://www.deutschland.de/">Germany</a></td>
                  </tr>
                  <tr>
                    <th scope="row"><i class="fa fa-envelope"></i>&nbsp;email:</th>
                    <td>  <!--#if expr="$REMOTE_ADDR = /139\.19\..*\..*/" -->
      <!-- CORRECT HERE:                                                       -->
      <!-- this is visible only from inside the institute.                     --> 
      <!-- It's convenient for everyone in the institute.                      -->
      <!-- That way spammers can not harvest your email address                -->

      <a href="mailto:kteotia@mpi-inf.mpg.de">kteotia@mpi-inf.mpg.de</a><br />

  <!--#else -->
      <!-- CORRECT HERE: Your personal URL can be found on the people page     -->
      <!-- How to find the unique URL for your email address:                  -->
      <!-- 1. Open in your browser:                                            --> 
      <!--          http://people.mpi-inf.mpg.de/people/index.html             -->
      <!-- 2. Find your name entry on that page                                -->
      <!-- 3. Copy the URL from the Email column that reads "Retrieve email"   --> 
      <!--    Tip: - Right click on the linked text "Retrieve email"           -->
      <!--         - and "Copy Link Location"                                  -->
      <!-- 4. Paste/Put this copied URL into the href-anchor tag below         -->

      <a href="paste the URL copied from step 3 here">Get my email address via email</a><br />

  <!--#endif -->
                   </td>
                  </tr>
                  <tr>
                    <th scope="row"><i class="fa fa-phone"></i>&nbsp;phone:</th>
                    <td>#officephone#</td>
                  </tr>
                  <tr>
                    <th scope="row"><i class="fa fa-fax"></i>&nbsp;fax:</th>
                    <td>#officefax#</td>
                  </tr>
                </table>
              </div>
