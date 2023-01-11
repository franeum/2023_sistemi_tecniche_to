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

# Cosa imparerete in questo corso?

--

### ad usare sistemi ```digitali``` in modo che interagiscano con il mondo ```reale```

--

### insegnerete al computer a ```sentire``` attraverso ```sensori```

--

### insegnerete al computer ad agire nell'ambiente attraverso ```attuatori``` 

---

### al centro di queste relazioni, connessioni, interazioni

--

# Arduino

--

<img src=images/arduino.jpg />

---

### Presentation Video
[Wired // Arduino: Creare è Un Gioco Da Ragazzi](https://www.youtube.com/watch?v=M48uQVJ6AFA)

---

# Cos'è Arduino?

---

1. un pezzo di ```hardware``` (una scheda)
2. un pezzo di ```software``` (Arduino IDE) {: .fragment}
3. una grande comunità di ```makers``` {: .fragment}  

---

# hardware
  
### Arduino è una piccola scheda dove un ```microcontroller``` coesiste con componenti elettrici e periferiche

---

# software

### Arduino è un software ```IDE``` (integrated development environment) e una ```libreria``` scritta in ```C```
### che permettono di programmare la scheda semplicemente scrivendo il codice e premendo un tasto

---

# comunità

- molte persone nel mondo usano Arduino: si contano circa 30 milioni di utenti attivi
- tali utenti (spesso chiamati ```makers```) amano condividere la loro conoscenza con gli altri
- c'è una grande mole di documentazione su Arduino sul web, prodotta dai makers per i makers, e disponibile a chiunque

---


# perché Arduino è divententata così famosa?

--

### è libera, open-hardware e open-source

--

### è semplice e non solo destinata agli ```esperti```
### a causa di questa semplicità Arduino vi permette di rendere reali le vostre idee

--

### costa poco (24 euro per il modello ```UNO```) e ha un grande numero di ```cloni``` molto economici
##### *clonare Arduino è possibile (e permesso) perché è open-hardware*

---

# Cosa si può fare con Arduino?

---

<img src=images/robot.svg width=180 height=180 />
<img src=images/arms.svg width=180 height=180 class=fragment />
<img src=images/domotics.svg width=180 height=180 class=fragment />
<img src=images/games.svg width=180 height=180 class=fragment />
<img src=images/musicalinstruments.svg width=180 height=180 class=fragment />
<img src=images/irrigators.svg width=180 height=180 class=fragment />
<img src=images/plotters.svg width=180 height=180 class=fragment />
<img src=images/arts.svg width=180 height=180 class=fragment />
<img src=images/responsives.svg width=180 height=180 class=fragment />
<img src=images/meteostations.svg width=180 height=180 class=fragment />
<img src=images/3dprinters.svg width=180 height=180 class=fragment />
<img src=images/pulmonaryventilators.svg width=180 height=180 class=fragment />

---

# la ```famiglia``` Arduino 

---

### Arduino è un insieme di schede:
- Arduino UNO {: .fragment}
- Arduino micro {: .fragment}
- Arduino nano {: .fragment}
- Arduino Leonardo {: .fragment}
- e molte altre... {: .fragment}   

---

### ...ma fondamentalmente queste schede condividono le stesse funzionalità e lo stesso software
### la differenza sta solo nei dettagli implementativi: voltaggio, numero di I/O, sensori ```a bordo```

---

# noi useremo Arduino ```UNO```

--

<img src=images/arduino.jpg />

---

# anatomia della scheda

---

<!-- .slide: data-transition="slide-in fade-out" background-transition="none" -->
<img src=images/anatomy/01_arduino.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/02_select_mcu.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/03_mcu_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/04_serialchip.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/05_serialchip_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/06_usb.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/07_usb_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/08_pins.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/09_pinsdigital.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/10_pinsanalog.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/11_pinspower.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/12_power.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/13_power_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in slide-out" -->
<img src=images/anatomy/14_all_desc.svg style="background:none; border:none; box-shadow:none;" />

---

# led integrati

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/15_arduino_leds.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/16_powerled.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/17_powerled_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/18_rxtxled.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/19_rxtxled_desc.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade" -->
<img src=images/anatomy/20_testled.svg style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in slide-out" -->
<img src=images/anatomy/21_testled_desc.svg style="background:none; border:none; box-shadow:none;" />

---

# e cos'altro?

--

- 2 ICSP connectors to program mcu and serial chip directly
- reset button {: .fragment}
- crystal oscillator {: .fragment}
- resistors, capacitors, voltage regulators, and so on... {: .fragment}

---

### ma tutto sommato si tratta solo di ferraglia! 

--

###  Quello di cui c'è bisogno è un po' di conoscenza...

--

# e delle IDEE