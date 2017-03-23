#!/usr/bin/perl

# 占いプログラム

require "cgi-lib.pl";

print "Content-type: text/html; charset=Shift_JIS\n\n";

&ReadParse(*form);

# ほめ言葉設定
if ($form{"seibetsu"} eq "男") {
  $home = "chinko";
} else {
  $home = "manko";
}

# 運勢設定
if ($form{"month"} < 3) {
  $unsei = "lucky";
} elsif ($form{"month"} < 10) {
  $unsei = "normal";
} else {
  $unsei = "hell";
}

print <<EOL;
<html>
<body>
<p>
Oh,$form{"namae"} is very $home .<br>
$form{"namae"} の運勢は $unsei じゃ。<br>
</p>
</body>
</html>
EOL
