#!/usr/bin/perl

# フォームの内容を表示する

require "cgi-lib.pl";    # cgi-libを使用する

print "Content-type: text/html; charset=utf-8\n\n";

&ReadParse(*form);

print <<EOL;
<html>
<body>
<p>
Hello Mr $form{"namae"} .
</p>
</body>
</html>
EOL
