Select e.name, b.bonus from Employee e
LEFT JOIN Bonus b
ON e.empId =b.empId
where b.bonus < 1000 OR b.bonus iS NULL


-- SQL me IS specially NULL check karne ke liye use hota hai.

-- NULL means:
-- value missing hai
-- ya value exist nahi karti

-- SQL me NULL ko = se compare nahi kar sakte..