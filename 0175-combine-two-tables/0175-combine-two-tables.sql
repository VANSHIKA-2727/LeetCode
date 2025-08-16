# Write your MySQL query statement below
SELECT p1.lastName, p1.firstName, p2.city , p2.state
FROM Person p1
LEFT JOIN Address p2
ON p1.personId = p2.personId;
