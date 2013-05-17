# Generate template for the next section - Kenichi Kamiya
template='template.cpp'
init="$1"
cp -p "$template" "$init"
git add "$init"