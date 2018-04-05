ldapsearch -LLL -t "(uid=z*)" cn | grep 'cn' | cut -c5- | sort -rf
