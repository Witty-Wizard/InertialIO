# Minimal makefile for Sphinx documentation

# You can set these variables from the command line, and also
# from the environment for the first two.
SPHINXOPTS       ?=
SOURCEDIR        = source
BUILDDIR         = build

# Detect Windows vs. Unix
ifeq ($(OS),Windows_NT)
    ACTIVATE = .venv\Scripts\Activate.ps1
    PIP = .venv\Scripts\pip.exe
    PYTHON = .venv\Scripts\python.exe
    SPHINXBUILD = .venv\Scripts\sphinx-build.exe
    SPHINXAUTOBUILD = .venv\Scripts\sphinx-autobuild.exe
else
    ACTIVATE = . .venv/bin/activate
	PIP              ?= .venv/bin/pip
	PYTHON           ?= .venv/bin/python
	SPHINXBUILD      ?= .venv/bin/sphinx-build
	SPHINXAUTOBUILD  ?= .venv/bin/sphinx-autobuild
endif

# Put it first so that "make" without argument is like "make help".
help:
	@$(SPHINXBUILD) -M help "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)

.PHONY: help Makefile setup dev

# Setup virtual environment and install dependencies
setup:
ifeq ($(OS),Windows_NT)
	python -m venv .venv
	$(PYTHON) -m pip install --upgrade pip
	$(PIP) install -r requirements.txt
else
	python -m venv .venv && \
	$(PIP) install --upgrade pip && \
	$(PIP) install -r requirements.txt
endif

# Run sphinx-autobuild for live-reloading docs during development
dev:
	@$(SPHINXAUTOBUILD) "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS)

# Catch-all target
%: Makefile
	@$(SPHINXBUILD) -M $@ "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)