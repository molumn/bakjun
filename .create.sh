#!/bin/bash

lang=$1
number=$2

extension=""
template_tag=""


case "$lang" in
    "c++"|"cpp")
        extension="cpp"
        template_tag="c++17"
        ;;
    *)
        extension=""
        ;;
esac

template="./.template-${template_tag}.$extension"
dest="./$number.$extension"

cp "$template" "$dest"

