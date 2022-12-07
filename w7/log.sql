-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Get the transcriptions from the interviews on the day of the crime
SELECT description
FROM crime_scene_reports
WHERE day = 28 AND month = 7 AND year = 2021 AND street = "Humphrey Street";

-- Get how the actvity is describe
SELECT name, transcript
FROM interviews
WHERE day = 28 AND month = 7 AND year = 2021 AND transcript LIKE "%bakery%";


SELECT activity, minute FROM bakery_security_logs WHERE day = 28 AND month = 7;
SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND activity = "exit";
SELECT name, phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND activity = "exit");
SELECT name, phone_number, passport_number FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration <= 60 INTERSECT SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND activity = "exit"));

SELECT full_name, abbreviation, city, id FROM airports WHERE id IN (SELECT DISTINCT origin_airport_id FROM flights);
SELECT id, hour, minute, destination_airport_id FROM flights WHERE year = 2021 AND month = 7 AND day = 29 AND origin_airport_id = 8;
SELECT name FROM people WHERE passport_number IN (SELECT passport_number FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration <= 60 INTERSECT SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND activity = "exit")) INTERSECT SELECT passport_number FROM passengers WHERE flight_id = 36);
SELECT name FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND atm_location = "Leggett Street" AND transaction_type = "withdraw")) INTERSECT SELECT name FROM people WHERE passport_number IN (SELECT passport_number FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2020 AND month = 7 AND day = 28 AND duration <= 60 INTERSECT SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute < 25 AND activity = "exit")) INTERSECT SELECT passport_number FROM passengers WHERE flight_id = 36);
SELECT name FROM people WHERE phone_number IN (SELECT receiver FROM phone_calls WHERE caller IN (SELECT phone_number FROM people WHERE name = "Bruc3e") AND year = 2021 AND month = 7 AND day = 28 AND duration < 60);


SELECT
    name
FROM
    people
    JOIN phone_calls ON people.phone_number = phone_calls.receiver
WHERE
    day = "28"
    AND month = "7"
    AND year = "2021"
    AND duration < "60"
    AND caller = (
        SELECT
            phone_number
        FROM
            people
        WHERE
            name = "Bruce"
    );
