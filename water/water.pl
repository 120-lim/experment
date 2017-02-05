#!/usr/bin/perl
use strict;
use warnings;

my (@high)= @ARGV;
my $num = @ARGV;
print "@high\n";

my $number = $high[0];

if ($num != $number + 1){
	print "The number you entered and the number of pole is not the same\n";
	exit;
}
my $volume = 0;
for (my $i = 1;$i<$number;$i++){
	for (my $j = 2;$j<$number+1;$j++){
		&max(&min($high[$i],$high[$j])*($j-$i),$volume);
	}
}
print $volume;

sub max{
	(my $x,my $y) = @_;
	if($x>$y){
		return $x;
	}else{
		return $y;
	}
}
sub min{		
	(my $x,my $y) = @_;
	if($x<$y){
		return $x;
	}else{
		return $y;
	}
}
