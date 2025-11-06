Student table - id,name,dob,age,fee

Show name,dob and fee of all the students

$$ \pi_{name,dob,fee}(student)$$

show every column of students who is ages above 18

$$ \pi_{*}(\sigma_{age > 18}(student))$$

Show id,age,fee of students who is paying atleast 55000 as fee

$$ \pi_{id,age,fee}(\sigma_{fee>55000}(student))$$

Show name of students WHo is paying not more than 40000 and aged greater than 16

$$ \tau_{name}(\pi_{names}(\sigma_{fee <= 40000 \land  age > 16)}(student))$$