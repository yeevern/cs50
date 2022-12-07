-- WRONG: SELECT DISTINCT(COUNT(name)) FROM people JOIN directors ON directors.person_id = people.id JOIN movies ON movies.id = directors.movie_id JOIN ratings ON ratings.movie_id = movies.id WHERE rating >= 9;
-- we want to relate people to rating, which is link people -> ratings
-- we must do: ratings -> movies -> directors -> people
SELECT name
FROM people
WHERE id IN (SELECT DISTINCT directors.person_id FROM directors JOIN movies ON movies.id = directors.movie_id JOIN ratings ON ratings.movie_id = movies.id WHERE rating >= 9);