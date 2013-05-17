# compile&run looks so script language :) - Kenichi Kamiya
product=./compiled.o
rm "$product"
g++ -o "$product" "$1"
"$product"