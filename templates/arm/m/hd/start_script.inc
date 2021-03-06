/* Setup loopback interface */
"ifconfig lo 127.0.0.1 netmask 255.0.0.0 up",
"route add 127.0.0.0 netmask 255.0.0.0 lo",
/* Setup eth0 interface */
"ifconfig eth0 192.168.0.102 netmask 255.255.255.0 up",
"route add 192.168.0.0 netmask 255.255.255.0 eth0",
"route add default gw 192.168.0.1 eth0",

"export PWD=/",
"export HOME=/",
"export QT_QPA_FONTDIR=/fonts",

"mkfs -q /dev/ram2 2048", /*8Mb*/
"mkfs -t vfat /dev/ram2",
"mkdir /mnt",
"mount -t vfat /dev/ram2 /mnt"
