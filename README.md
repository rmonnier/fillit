# fillit

## Synopsis

The purpose is to make the smallest possible "square" (which can contain holes) with a given list of tetriminos, but the disposition must be as such that it returns the first possible solution when placing them recursively from the top left.

## Compiling

Run make, an executable called fillit should compile directly.

## Usage

./fillit [file]

## Example:

~ ./fillit samples/test_8

.AABB..
AACCB..
.CC.BDD
.EE.DD.
EEFFGG.
.FFGGHH
....HH.
