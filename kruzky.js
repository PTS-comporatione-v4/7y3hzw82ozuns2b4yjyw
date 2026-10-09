// CICADA 6845 // TEST 07 — nastavenie 2/3
// Stroj potrebuje viac, než vidíš v zadaní.
// Dekóduj a doplň do Enigmy.

const signal = "MSAyIDE=";  // base64

const sprava = Buffer.from(signal, "base64").toString("utf-8");
console.log(sprava);
