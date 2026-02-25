# 🎄 ASCII Christmas Tree Generator (C)

A procedural **command-line Christmas tree generator** written in C.

This program renders a scalable ASCII Christmas tree directly in the terminal based on a user-defined size. The tree is generated mathematically using spacing and star patterns to keep it perfectly centered and symmetrical.

---

## ✨ Features

* 📏 Adjustable tree size from command line
* 🌲 Multi-layered tree structure
* 🎯 Perfect horizontal centering
* 🪵 Proportional trunk rendering
* ⚡ Fast procedural generation
* 🧮 Pattern-based geometry logic
* 💻 Pure terminal output

No external libraries required.

---

## 🧠 How It Works

The tree is built in three stages:

1. **Width calculation** → determines maximum tree width for alignment
2. **Layer rendering** → generates star patterns for each segment
3. **Trunk drawing** → centered vertical trunk

Spacing and star counts are calculated dynamically for symmetry.

---

## 🛠 Tech Stack

* C (ANSI C)
* Procedural generation logic
* Command-line arguments
* Terminal rendering

---

## ⚙ Compile & Run

### Compile

```bash
gcc main.c -o christmas-tree
```

### Run

```bash
./christmas-tree 5
```

Replace `5` with any positive integer to change tree size.

---

## 📥 Program Usage

```bash
./christmas-tree <size>
```

Example:

```bash
./christmas-tree 7
```

---

## 📐 Output Structure

The generated tree contains:

* Layered branches
* Increasing width per segment
* Center alignment
* Symmetrical star distribution
* Size-based trunk

All proportions scale automatically.

---

## 🎯 Purpose

This project demonstrates:

* algorithmic pattern generation
* terminal graphics using text
* mathematical layout control
* procedural rendering in C
* command-line program design

---

## 🔮 Possible Improvements

* Tree decorations (ornaments, lights, star)
* Color output (ANSI escape codes)
* Animation mode
* Snow effect
* Randomized tree shapes
* Export to text file
* Interactive size input
