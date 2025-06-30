# dictionary -> A collection of {key : value} pairs ordered and changeable.No duplicates

capitals = {"USA": "Washington",
            "India": "New Delhi"}

# print(dir(capitals))
# print(help(capitals))

print(capitals.get("USA"))
capitals.update({"Germany": "Berlin"})
capitals.pop("India")
capitals.popitem() # remove last item
capitals.clear()
print(capitals)

favt_player = {"Amjad": "CR7",
               "Efti": "Di Maria",
               "Zarin": "Neymar",
               "Mahir": "CR7"}
keys = favt_player.keys()
values = favt_player.values()
print(keys,values)
print(favt_player.items())

for key,value in favt_player.items():
    print(f"{key:10} : {value}")