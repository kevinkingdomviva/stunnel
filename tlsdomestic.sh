#!/bin/bash
apt-get -y update
apt-get -y upgrade
sudo apt-get -y install unrar
sudo apt-get -y install vim
wget --no-check-certificate https://github.com/kevinkingdomviva/stunnel/raw/master/tls-tunnel.rar
unrar x tls-tunnel.rar /root/
cd /root/tls-tunnel
chmod +x install.sh
chmod +x client.sh
chmod +x server.sh
./install.sh
bash /root/tls-tunnel/client.sh
supervisorctl restart stunnel-client
