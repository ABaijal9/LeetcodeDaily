select e.name, b.bonus 
from Bonus b right join Employee e
on b.empid = e.empid
where b.bonus<1000 or b.bonus is null;