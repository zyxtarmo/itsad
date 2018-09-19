

from datetime import date
from hashlib import sha256

"""
https://blogs.cisco.com/security/talos/threat-spotlight-dyre
"""

def dyre_dga (num, date_str=None):
	if None == date_str:
		date_str = '{0.year}-{0.month}-{0.day}'.format(date.today())
	tlds = ['.cc', '.ws', '.to', '.in', '.hk', '.cn', '.tk', '.so']
	hash = sha256('{0}{1}'.format(date_str, num)).hexdigest()[3:36]
	replace_char = chr(0xFF & ((num % 26) + 97))
	return '{0}{1}{2}:443'.format(replace_char, hash, tlds[num % len(tlds)])

todays_domains = [dyre_dga(i) for i in xrange (333)]

for i in todays_domains:
	print i
