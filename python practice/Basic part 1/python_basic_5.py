# 25. Value in Group Tester

#def is_group_member(group_data, n):
 #   for value in group_data:
  #      if n == value:
   #         return True
    #return False

#group_input = input("Enter a list of numbers: ")
##group_list = list(map(int, group_input.split()))
#group_list = group_input.split()
#n_input = input("Input for n: ")

#print(is_group_member(group_list, n_input)) 
#print(group_list) 


# 26. List Histogram

#def histogram(items):
 #   for n in items:
  #      output = ''
   #     times = n

#        while times > 0:
 #           output += '*'
  #          times = times - 1
   #     print(output)

#items_input = input("Enter an input histogram items: ")
##items_list = items_input.split()
#items_list = list(map(int, items_input.split()))

#histogram(items_list) 


# 27. List to String Concatenator

#def concatenate_list_data(lst):
 #   result = ''

  #  for element in lst:
   #     result += str(element)
    #return result

#lst_input = input("Enter a list input: ")
#lst_list = lst_input.split()
##lst_list = list(map(int, lst_input.split()))

#result = concatenate_list_data(lst_list)
#print(result) 


# 30. Triangle Area Calculator 

b = int(input("Input the base: "))
h = int(input("Input the height: "))

area = b * h / 2

print("area = ", area)
