find . -name "*.sh" -exec sh -c 'echo "${0##*/}"' {} \; | sed 's/\.sh$//1'
