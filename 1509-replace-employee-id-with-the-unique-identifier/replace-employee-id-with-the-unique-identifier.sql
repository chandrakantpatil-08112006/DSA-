# Write your MySQL query statement below
select e1.name,e2.unique_id
from Employees e1
left JOIN EmployeeUNI e2
on e2.id = e1.id; 