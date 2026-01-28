FROM debian:latest
RUN apt update && apt install -y \
	git \
	python3 \
	python3-pip \
	sudo \
	gcc-arm-none-eabi \
	binutils-arm-none-eabi \
	libnewlib-arm-none-eabi \
	avr-libc \
	gcc-avr \
	avrdude \
	dfu-programmer \
	dfu-util \
	dos2unix \
	wget \
	unzip \
	zip \
	&& rm -rf /var/lib/apt/lists/*
RUN python3 -m pip install qmk appdirs --break-system-packages
WORKDIR /root
