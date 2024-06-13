# POGEMA Benchmark

Welcome to the official repository for the POGEMA Benchmark. This is an umbrella repository that contains links and information about all the tools and algorithms related to the POGEMA Benchmark.

## Repository Overview

This repository is organized into several key areas:

- **Raw Data Directories**: Contains evaluation results for baseline approaches. Details include:
  - [raw_data_LMAPF](https://github.com/Tviskaron/pogema_benchmark/tree/main/raw_data_LMAPF): Evaluation data for Less Multi-Agent Path Finding (LMAPF) challenges, including configurations and maps.
  - [raw_data_MAPF](https://github.com/Tviskaron/pogema_benchmark/tree/main/raw_data_MAPF): Evaluation data for Multi-Agent Path Finding (MAPF) challenges, including configurations and maps.
  - Both directories feature YAML configuration files detailing the evaluation settings (number of agents, maps, seeds, episode length) and a `maps.yaml` file listing all the maps used in the evaluations.

## Installation

### POGEMA Environment
Install the POGEMA environment using pip:
```bash
pip3 install pogema
```
For more details, visit the [POGEMA GitHub repository](https://github.com/AIRI-Institute/pogema).

### POGEMA Toolbox
Install additional tools for POGEMA:
```bash
pip3 install pogema-toolbox
```

### Algorithms
Explore integrated algorithms located in the `algorithms` directory:
- Algorithms such as DCC, ENV, LACAM, MAMBA, MATS_LP, RHCR_CPP, SCRIMP, etc.
- Navigate to the directory using:
  ```bash
  cd algorithms
  ```
- Install necessary dependencies:
  ```bash
  pip3 install -r docker/requirements.txt
  ```
- Optionally, build a Docker image to containerize the environment:
  ```bash
  cd docker && sh build.sh
  ```

## Evaluation

Execute the evaluation script:
```bash
python eval.py
```
## Contents at a Glance

```plaintext
.
├── algorithms
│   ├── Multiple algorithms for benchmarking
│   ├── Docker configuration for container setup
│   ├── eval.py for running evaluations
├── raw_data_LMAPF
│   ├── Data categorized by map types: Random, Mazes, Warehouse, etc.
├── raw_data_MAPF
│   ├── Similar categorization with specific map evaluations
└── README.md
```
