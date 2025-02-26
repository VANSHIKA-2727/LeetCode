# Write your MySQL query statement below
SELECT x.id 
FROM Weather x, Weather y 
WHERE DATEDIFF(x.recordDate, y.recordDate) = 1 
AND x.temperature > y.temperature;
