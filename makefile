project: login.h login.cpp police.h police.cpp user.h user.cpp Challan.h challan.cpp main.cpp
	g++ login.cpp police.cpp user.cpp challan.cpp main.cpp -o project

clear:
	rm -f project

