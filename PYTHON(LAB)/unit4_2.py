import numpy as np
import pandas as pd
exam_data={
    'name':['Anastasia','Dima','Katherine','James','Emily','Michael','Matthew','Laura','Kelvin','Jonas'],
    'score':[12.5,9,16.5,np.nan,9,20,14.5,np.nan,8,19],
    'attempt':[1,3,2,3,2,3,1,1,2,1],
    'qualify':['yes','no','yes','no','no','yes','yes','no','no','yes']
        }
labels=['a','b','c','d','e','f','g','h','i','j']
df=pd.DataFrame(exam_data,index=labels)
print(df)
print("----------")
# a
df.loc['d','name']='Suresh'
print(df)
print("----------")
# b
Salaries=[50000,60000,1200,20000,30000,40000,70000,900000,80000,50000]
df['Salary']=Salaries
print(df)
print("------------")
# c
column_headers=df.columns.tolist()
print(column_headers)