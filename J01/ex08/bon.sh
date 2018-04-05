ldapsearch -Q "(sn=*bon*)" sn | grep sn: | cut -d : -f 2 | cut -c2- | wc -l | sed 's/^[ \t]*//'
