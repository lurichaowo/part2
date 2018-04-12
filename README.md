At first running of make, it didn't compile completely. Makefile was adjusted to compile everything with "make".
Program itself did not return anything correct.

  * Extra unecessary files were removed.
  * Changed unindenting program to getline instead of >>, to delimit on new lines.

### unindenting
  * Corrected methods inside while. 
  * Added a break since no helper was used to move loop forward.
  * Removed unecessary getline.

### indenting
  * In order to not change the general structure and work with original idea,
  * Created an std::stringstream to store the unindented file.
  * Changed b_count when { is first character. 
  * Added the line substring as it was forgotten

### main
  * Printed final output