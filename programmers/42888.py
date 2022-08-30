
record = ["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]
answer = []
dictionary = {} #dictionary 

for str in record:
    tmp = str.split()
    state = tmp[0]
    id = tmp[1]
    
    if state == "Leave":
        dictionary[id][0] = "Leave"
    else:
        name = tmp[2]
        if state == "Enter":
            dictionary[id] = [state, name]
        elif state == "Change":
           dictionary[id][1] = name
    
for str in record:
    tmp = str.split()
    state = tmp[0]
    id = tmp[1]
    if state == "Enter":
        answer.append(dictionary[id][1] + "님이 들어왔습니다.")
    elif state == "Leave":
        answer.append(dictionary[id][1] + "님이 나갔습니다.")

for str in answer:
    print(str)