---

theme: "white"
transition: "slide"
transitionSpeed: "slow"
slideNumber: false
overview: false
previewLinks: false
controls: true
dataState: "no-title-footer"

---

<style>
    .reveal code {
        background-color: #66b3ff;
        color: #000000;
        padding: 0.2em 0.25em 0.2em 0.25em;
    }

    #title-footer {
        display: none;
    }
</style>

<script>
    mermaid.initialize({ theme: 'neutral' })
</script>

# Partitore di tensione

---

## recap legge di ohm

$$V = IR$$

---

[link](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcMBMcUHYMGZIA4UA2ATmIxAUgoqoQFMBaMMAKAHMKNCKU9PuExFFCgsASsgzCEvScML4RVACy0lUaAhYB3fjz4IuIFCmWjdh7ibNc+10QCcQt46ZB48Ve17Q73n1zMwSClA8zkw4NCZPkgWIA)

---

## legge di kirchoff sulle tensioni

la somma algebrica delle tensioni agenti tra le coppie di punti nello spazio che formano una qualsiasi sequenza chiusa (orientata) è uguale a zero

--

Ogni elemento resistivo in un circuito produce una caduta di tensione sull'elemento stesso. La somma di queste cadute di tensione è SEMPRE uguale a zero

[Esempio con due resistenze in serie](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcMBMcUHYMGZIA4UA2ATmIxAUgoqoQFMBaMMAKAHMKNCKU9PuExFFCgsASsgzCEvScML4RVACy0lUaAhYB3fjz4IuIFCmWiATiEKrjpkBhm2zVE5B33HJs3jhPRusEgpP0DgmT43SzxrP1JhLxFAuHc4kKD4uzddQ24E6xdM9x8C7xiEtwB5EGK-GuZhKjdVbGrlPh8QMm4wZWdkAH1rfsh+1WI8fpRNYegwfqZ+1irQjLMwNBKlFmbwMGxchG6iM2w0RJRB5WHRyHH+hBm5haW9BOUwXMzRHew8M0xpOsQNh9okrkMRmMJjB4EFCChiNhiMoENh1g8YE85qwgA)

---

## come calcoliamo la tensione in un punto del circuito?

$$V = V_{tot} - \frac{V_{tot}}{R1 + R2}R1$$ 

---

## Cosa succede se una delle due resistenze è variabile?

- La tensione di uscita in un punto del circuito posto fra le due resisteze sarà variabile
- Una fotoresistenza è una resistenza variabile; se messa in serie con un'atra resistenza può costituire un circuito che eroghi tensione variabile

[circuito con fotoresistenza](https://tinyurl.com/29m7p9z8)

---

## Portare il circuito su Arduino

Occorrono 3 pin:
1. 5V
2. GND
3. Un pin analogico

--

- I primi due servono ad alimentare il circuito, il terzo a leggere i valori di voltaggio.
- I pin etichettati A0 ... A5 servono a leggere tensioni analogiche, quindi valori continui compresi fra 0 e 5V.
- ... che verranno convertiti in un numero intero compreso fra 0 e 1023 (compreso).

--


- La tabella seguente mostra alcuni esempi di conversione: 
---

| tensione in entrata (Volt) | conversione (Intero) |
|----------------------------|----------------------|
| 0                          | 0                    |
| 5                          | 1023                 |
| 2.5                        | 512                  |
| 1.25                       | 256                  |
| 4                          | 819                  |

---

<img src=fotoresistor.png />



