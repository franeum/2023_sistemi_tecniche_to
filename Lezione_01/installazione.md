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
    .reveal h1 {
        font-size: 1.25em;
        color: #000000;
    }

    .reveal li {
        font-size: 0.8em;
    }

    .reveal code {
        background-color: #66b3ff;
        color: #000000;
        padding: 0.2em 0.25em 0.2em 0.25em;
    }

    .language-bash {
        background-color: #000000;
        color: #00ff00;
    }
</style>

# INSTALLAZIONE INTERATTIVA

---

# forma artistica in cui `MEDIA` diversi occupano uno spazio comune

--

# E DOVE LO SPETTATORE È INTERAGISCE CON I MEDIA

---

# costruiremo un dispositivo in grado di `SENTIRE` la luce nell'ambiente...

--

# una lampada proietta un fascio luminoso su un sensore

--

![](s_images/shadows1.svg)

---

# Quando la luminosità cambia, grazie all'intervento di uno spettatore

--

![](s_images/shadows2.svg)

--

# ...vengono `INNESCATI` DEGLI `EVENTI`

--

# `SUONI` E `VOCI` REGISTRATE...
# ...CHE LEGGONO E RECITANO PAROLE E FRASI SUL TEMA DELLA`LUCE` {: .fragment}

---

# <div style="text-align: right"> luminoso </div>
## <div style="text-align: left"> ombra </div>
### <div style="text-align: center"> silhouette </div>
# <div style="text-align: justify"> calore </div>
##### <div style="text-align: center; padding: 2em 3em 0.2em 0.25em;"> fredda </div>
### <div style="text-align: right; padding: 2em 3em 0.2em 0.25em;"> kelvin </div>
# <div style="text-align: left"> ... </div>

---

# COSTRUIREMO DIVERSE `POSTAZIONI` NELLO SPAZIO

---

# OGNUNA DELLE QUALI COMPOSTA DA UNA `FOTORESISTENZA`
<img src=s_images/fotoresistenza.jpg width=250 height=250 /> {: .fragment}

--

# CHE MISURERÀ LA QUANTITÀ DI LUCE PRESENTE SULLA SUA SUPERFICIE
# E INVIERÀ TALE VALORE A UNA SCHEDA ARDUINO

--

# CHE SI OCCUPERÀ DI ELABORARE IL SEGNALE E DI INVIARLO A UN COMPUTER

---

# DOVE IL SOFTWARE `PUREDATA` SI OCCUPERA' DI GESTIRE LE NOSTRE VOCI E I NOSTRI SUONI

--

<img src=s_images/tutto.svg />

---

# FLUSSO DI LAVORO

---

# Testi 
1. scelta e compilazione {: .fragment}
2. registrazione {: .fragment}
3. editing e pulizia con `ocenaudio` {: .fragment}
4. sequencing {: .fragment}

---

# Arduino
1. Costruzione del dispositivo (cavi, fotoresistenze, *inscatolamento*) {: .fragment}
2. Scrittura del codice (Arduino IDE) {: .fragment}

---

# Suoni
1. Che suoni? {: .fragment}
2. Costruzione della *patch* con `puredata` {: .fragment}

---

# Parte meccanica e assemblaggio
1. Costruzione {: .fragment} 
2. Collegamento di tutte le parti {: .fragment}
3. Messa in moto! {: .fragment}
