ifconfig | grep ether | cut -f2 -d" " | sed '2d'
