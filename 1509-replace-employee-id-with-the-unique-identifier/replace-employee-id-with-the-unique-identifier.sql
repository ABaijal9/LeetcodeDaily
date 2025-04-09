# Write your MySQL query statement below
select U.unique_id, e.name 
from Employees as e 
left join EmployeeUNI as U 
on U.id = e.id;