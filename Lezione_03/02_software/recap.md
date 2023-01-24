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

# Software recap

---

### Arduino IDE allows you to carry out the 4 steps to program the board:
1.  **connect** (the board to computer via USB)
2.  **code** (source code writing)
3.  **compile** (to generate machine code)
4.  **upload** (machine code to board)

---

<img src=images/01_idemenu.png width=640 style="background:none; border:none; box-shadow:none;" />

---

### arduino language
1.  arduino only understands ```machine code```, long sequences of 0 and 1
2.  but we can write algorithms using a (more expressive) ```programming language``` derived from c/c++
3.  after writing one has to compile the code in order to generate the machine code listing

---

### An arduino program is composed basically by 2 main functions:
- setup(): used to configure board to perform the task (executed once)
- loop(): performs the task (executed repeatedly)

---

### first sketch: blink builtin led

---

<!-- .slide: data-transition="slide-in fade-out" -->
<img src=recap_images/01_complete.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/02_funx.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/03_objects.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/01_complete.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/04b_define.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/06_defined_visible.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/07_complete.png width=480 style="background:none; border:none; box-shadow:none;" />

---

## syntactic elements

---

### comments

```c++
// single line comment

/*
    multi 
    line
    comment
*/
```

---

<!-- .slide: data-transition="slide-in slide-out" -->
<img src=recap_images/08_comments.png width=480 style="background:none; border:none; box-shadow:none;" />

---

### values

- integer numbers
- float numbers
- strings

---

<!-- .slide: data-transition="slide-in fade-out" -->
<img src=recap_images/09_integer.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in slide-out" -->
<img src=recap_images/10_string.png width=480 style="background:none; border:none; box-shadow:none;" />

---

### functions (procedures)

Perform actions  
*function_name(arg1, arg2, ..., argn);*

```c++
digitalWrite(7, OUTPUT);
```

---

<!-- .slide: data-transition="slide-in fade-out" -->
<img src=recap_images/11_func_clean.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/12_func_name.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in slide-out" -->
<img src=recap_images/13_func_args.png width=480 style="background:none; border:none; box-shadow:none;" />

---

### objects methods

Perform actions on objects   
*Object.method(arguments);*

```c++
Serial.println("acceso");
```

---

<!-- .slide: data-transition="slide-in fade-out" -->
<img src=recap_images/14_obj_clean.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/15_obj_name.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/16_obj_method.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in fade-out" -->
<img src=recap_images/17_obj_args.png width=480 style="background:none; border:none; box-shadow:none;" />

---

<!-- .slide: data-transition="fade-in slide-out" -->
<img src=recap_images/18_obj_action.png width=480 style="background:none; border:none; box-shadow:none;" />

---

### esercitazione

---

<!-- .slide: style="font-size: 0.75em" -->

<style>
.reveal h4 {
    font-size: 1.5em;
}
</style>

#### Writing blink sketch with these features:
1.  Directive **#define** with label **MY_LED** 
2.  **Comments** (single line AND multi line)
3.  Configuration of **Serial Port** to transmit at 9600 baud
4.  Message **"ON"** when the led lights up
5.  Message **"OFF"** when the led turns off
6.  **Delay** time of 250 milliseconds
7.  Saving project with the name **01_***myname***_blink**<sup>[*](#myfootnote1)</sup> (a folder with the same name will automatically be created, with the file **01_*myname*_blink.ino** inside)

<p style="font-size: 1em"><a name="myfootnote1">*</a>: Substitute <i><strong>myname</strong></i> with your name</p>
