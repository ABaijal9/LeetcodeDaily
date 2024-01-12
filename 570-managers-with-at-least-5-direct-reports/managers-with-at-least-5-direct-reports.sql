SELECT T.name FROM Employee E JOIN Employee T ON E.managerId   = T.id GROUP BY E.managerId
HAVING COUNT(T.id) >= 5;