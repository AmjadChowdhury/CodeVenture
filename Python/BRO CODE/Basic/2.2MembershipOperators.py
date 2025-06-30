# Membership operators
# in, not in

name = "amjad"

if 'a' in name:
    print(f"a exist in {name}")
    
profile = {"name": "Amjad",
           "age": 22,
           "country": "Bangladesh"}

if "name" in profile:
    print(f"Exist,and name is {profile['name']}")
if "DOB" not in profile:
    print("DOB Nai,jamela o nai")
