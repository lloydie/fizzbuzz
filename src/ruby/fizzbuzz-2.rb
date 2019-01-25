#!/usr/bin/ruby

(1..1000000).each{|i|i%0xF==0? puts(["46697A7A42757A7A"].pack("H*")):i%(0xD-0xA)==0? puts(["46697A7A"].pack("H*")):i%(0xF-0xA)==0? puts(["42757A7A"].pack("H*")):puts(i)}

