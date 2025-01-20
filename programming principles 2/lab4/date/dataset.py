import json

with open('lab4/json/sample-data.json', 'r') as file:
    data = json.load(file)

output = {
    "totalCount": str (len(data['imdata'])),
    "imdata": []
}

for item in data['imdata']:
    l1PhysIf = item ["l1PhysIf"]["attributes"]
    dn = item["l1PhysIf"]["attributes"]["dn"]
    descr = item["l1PhysIf"]["attributes"]["descr"]
    speed = item["l1PhysIf"]["attributes"]["speed"]
    mtu = item["l1PhysIf"]["attributes"]["mtu"]

format_Dn = "{:<45} {:<20} {:<15} {:<40}".format (
    dn, 
    descr, 
    speed, 
    mtu 
)

"""format_interface = "{:<50} {:<20} {:<80}".format (
    l1PhysIf ['adminSt']
    l1PhysIf ['bw']
    l1PhysIf ['mode']
)"""

print('Interface Status')
print("="*80)
print(
"DN                                              Description         Speed          MTU" "\n"
"-----------------------------------------------  ----------         ------        ------ ")
print(format_Dn)
print(format_Dn)
print(format_Dn)
#print(f"Total count {output['totalCount']}")