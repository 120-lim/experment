#!/usr/bin/perl
use strict;
use warnings;

my (@argv) = @ARGV;
@argv = &greaterswap(@argv);
print "@argv \n";

sub greaterswap{
	(my $x,my $y) = @_;
	if ($x>$y){
		return ($x,$y);
	}else{
		return ($y,$x);
	}
}
