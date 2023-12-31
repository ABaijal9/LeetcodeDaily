# Write your MySQL query statement below
# CREATE TABLE IF NOT EXISTS World(
#     name varchar(255) primary key unique,
#     continent varchar(255),
#     area int,
#     population int,
#     gdp bigint
# );

SELECT name, population, area FROM World WHERE area >= 3000000 OR population >= 25000000;