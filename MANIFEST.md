title: gr-malahit
brief: A GNU Radio malahit dsp source
tags:
  - malahit
author:
  - Sergej Komov
copyright_owner:
  - Sergej Komov
dependencies:
  - gnuradio (>= 3.9.0 )
  - alsa usb drivers activated
repo: https://github.com/mihaly4/gr_malahit.git
---
gr-malahit is an linux and OSX addon for gnuradio to implement a malahit dsp source.
On linux it autodetects the correct soundcard from /proc/asound/cards.
This idea was taken from the osmosdr drivers.  To control the device the usb serial is used.

It contains four components:
 
Malahit DSP              - The complete source block
Malahit DSP control      - The control block, to set frequency.

The  control block are used inside the source block but can be used standalone, too.
All blocks contain a message port to set the frequency by messages.

You find these blocks in grc

Malahit


