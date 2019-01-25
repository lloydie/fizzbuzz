#!/usr/bin/python

import sys
def fibu():
        (F,I,B,U),i,u,z=sys._getframe(0).f_code.co_name,0xf,0xb,lambda x,y:x%((i//u)+(i^u))==u>>i if y>u else x%(((u<<(u>>2))&i)>>(u>>2))==i>>u
        A,RP = "",chr(ord(U)+((i//u)+(i^u)))*2
        for x in range(1000001):print(x if not (z(x,u)or z(x,i))else A.join((F+I+RP if z(x,u)else A,B+U+RP if z(x,i)else A)))
fibu()
